#include "../Public/Renderer.h"

void Renderer::prepare()
{
	glClearColor(0.1f, 0.2f, 0.3f, 1.0);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
}

void Renderer::render(Model model)
{
	glBindVertexArray(model.getVaoId());
	glEnableVertexAttribArray(0);

	glDrawArrays(GL_TRIANGLES, 0, model.getVertexCount());

	glDisableVertexAttribArray(0);
	glBindVertexArray(0);
}
